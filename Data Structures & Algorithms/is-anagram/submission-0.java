class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character, int[]> map = new HashMap<>();

        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(!map.containsKey(c)) {
                map.put(c, new int[]{0,0});
            }
            map.get(c)[0] += 1;
        }

        
        for(int i = 0; i < t.length(); i++) {
            char c = t.charAt(i);
            if(!map.containsKey(c)) {
                return false;
            }
            map.get(c)[1] += 1;
        }

        for( int[] arr : map.values()) {
            System.out.println(arr[0]);
            System.out.println(arr[1]);
            if(arr[0] != arr[1]) return false;
        }

        return true;

    }
}
